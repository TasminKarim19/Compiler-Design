keywords = ['auto', 'break', 'case', 'const', 'continue', 'default', 'do', 'double',
            'else', 'enum', 'extern', 'float', 'for', 'goto', 'if', 'int', 'long', 'register',
            'return', 'short', 'signed', 'sizeof', 'static', 'struct', 'switch', 'typedef', 'union',
            'unsigned', 'void', 'volatile', 'while']
operator = ['+', '-', '%', '&', '=']
op = []
kw = []
tokens = []

from string import ascii_lowercase, ascii_uppercase

ids = list(ascii_lowercase)
ids_u = list(ascii_uppercase)
identifiers = []
import re

line = input("")
for i in line:
    if i in operator:
        op.append(i)
tokens = re.split('\\s|(?<!\\d)[-+%&=,](?!\\d)|;', line)

for token in tokens:
    if token in keywords:
        kw.append(token)
    elif token in ids:
        identifiers.append(token)
    elif token in ids_u:
        identifiers.append(token)
    elif token.isidentifier():
        identifiers.append(token)
    

print("Keywords:", '\n'.join(map(str, kw)))
print("Identifiers:", ','.join(map(str, identifiers)))
print("Operators:", ','.join(map(str, op)))

