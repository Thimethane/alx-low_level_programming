#!/usr/bin/python3

import dis
import marshal

with open('crackme4', 'rb') as file:
    bytecode = file.read()

code_object = marshal.loads(bytecode)
dis.dis(code_object)
