# entropy
计算字符串/文件的压缩率

命令 | 编译结果 | 参数 | 含义 | 举例
---|---|---|---|---
make entropy\_string | entropy\_string | 参数为一个字符串 | 计算参数字符串的压缩率 | ./entropy\_string aaaaaaaaaaaaaaabbbbb
make | entropy\_file |参数为文件路径 | 计算文件内容的压缩率 | ./entropy\_file Makefile
