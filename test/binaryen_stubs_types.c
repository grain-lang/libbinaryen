#define CAML_NAME_SPACE
#include <caml/mlvalues.h>
#include <caml/fail.h>
#include <caml/memory.h>
#include <caml/alloc.h>
#include <caml/custom.h>

#include "binaryen-c.h"

static struct custom_operations binaryen_ops = {
  "com.binaryen.caml",
  custom_finalize_default,
  custom_compare_default,
  custom_hash_default,
  custom_serialize_default,
  custom_deserialize_default,
  custom_compare_ext_default,
  custom_fixed_length_default
};

#define BinaryenType_val(v) (*((BinaryenType*) Data_custom_val(v)))

/* Allocating an OCaml custom block to hold the given BinaryenType */
static value alloc_BinaryenType(BinaryenType typ)
{
  value v = caml_alloc_custom(&binaryen_ops, sizeof(BinaryenType), 0, 1);
  BinaryenType_val(v) = typ;
  return v;
}

CAMLprim value
caml_binaryen_type_none(value unit) {
  CAMLparam1(unit);
  BinaryenType ty = BinaryenTypeNone();
  CAMLreturn(alloc_BinaryenType(ty));
}
