load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_import")

cc_import(
    name = "torch",
    hdrs = glob(["libtorch/include/**/*.h"]),
    shared_library = "libtorch/lib/libtorch.dylib",
)

cc_binary(
    name = "main",
    srcs = [
        "src/main.cpp",
    ],
    copts = [
        "-std=c++17",
        "-ffast-math",
        "-fopenmp",
        "-mavx2",
        "-mfma",
        "-O3 -mllvm -polly",
    ],
    includes = [
        "libtorch/include",
        "libtorch/include/torch/csrc/api/include",
    ],
    visibility = ["//visibility:public"],
    deps = [":torch"],
)
