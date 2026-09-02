// bill-mark/shuxue 1.0.0
// 最底层的测试包：不依赖任何东西，只导出两个函数。

export fn jia(a i64, b i64) i64 {
    return a + b;
}

export fn jian(a i64, b i64) i64 {
    return a - b;
}

// 没写 export，外部既不能 import 也不能限定调用
fn wei_daochu(a i64) i64 {
    return a + 1;
}
