from wasmtime import wat2wasm

wat = """
(module
  (func (export "hello") (result i32)
    i32.const 42
  )
)
"""

wasm_bytes = wat2wasm(wat)

with open("hello.wasm", "wb") as f:
    f.write(wasm_bytes)

print("hello.wasm created!")