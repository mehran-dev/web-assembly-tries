from wasmtime import wat2wasm

wat = """
(module

  ;; secret number = 7

  (func (export "check") (param i32) (result i32)

    local.get 0
    i32.const 7
    i32.eq
    if (result i32)
      i32.const 0
    else

      local.get 0
      i32.const 7
      i32.lt_s

      if (result i32)
        i32.const -1
      else
        i32.const 1
      end

    end
  )

)
"""

wasm_bytes = wat2wasm(wat)

with open("game.wasm", "wb") as f:
    f.write(wasm_bytes)

print("game.wasm created!")