import zlib
obj = "9c612ec60497146e46229bc2ce24daedf3f9e3ae"
with open(f"test/.git/objects/{obj[:2]}/{obj[2:]}", 'rb') as fb:
    contents = zlib.decompress(fb.read())

print(contents)

