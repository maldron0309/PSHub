#!/usr/bin/env python

import os
from urllib import parse

HEADER="""# 
# 백준 & 프로그래머스 문제 풀이 목록

프로그래머스의 경우, 푼 문제 목록에 대한 마이그레이션이 필요합니다.

"""

# 파일 확장자를 기반으로 언어를 매핑
LANGUAGE_MAP = {
    ".py": "Python",
    ".cpp": "C++",
    ".asm": "Assembly",
    ".cs": "C#",
    ".go": "Go",
    ".rs": "Rust",
    ".c": "C",
}

def get_language(file_name):
    _, ext = os.path.splitext(file_name)
    return LANGUAGE_MAP.get(ext, "Unknown")

def main():
    content = ""
    content += HEADER
    
    directories = []
    solveds = []

    for root, dirs, files in os.walk("."):
        dirs.sort()
        if root == '.':
            for dir in ('.git', '.github'):
                try:
                    dirs.remove(dir)
                except ValueError:
                    pass
            continue

        category = os.path.basename(root)
        
        if category == 'images':
            continue
        
        directory = os.path.basename(os.path.dirname(root))
        
        if directory == '.':
            continue
            
        if directory not in directories:
            if directory in ["백준", "프로그래머스"]:
                content += "## 📚 {}\n".format(directory)
            else:
                content += "### 🚀 {}\n".format(directory)
                content += "| 문제번호 | 링크 | 언어 |\n"
                content += "| ----- | ----- | ----- |\n"
            directories.append(directory)

        for file in files:
            language = get_language(file)
            if category not in solveds:
                content += "|{}|[링크]({})|{}|\n".format(
                    category, parse.quote(os.path.join(root, file)), language
                )
                solveds.append(category)
                print("category : " + category)

    with open("README.md", "w") as fd:
        fd.write(content)
        
if __name__ == "__main__":
    main()
