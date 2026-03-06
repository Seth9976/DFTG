// 函数名称: ??4?$__crt_unique_heap_ptr@_WU__crt_internal_free_policy@@@@QAEAAV0@$$QAV0@@Z
// 虚拟地址: 0x57c2a4
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __thiscall??4?$__crt_unique_heap_ptr@_WU__crt_internal_free_policy@@@@QAEAAV0@$$QAV0@@Z(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: __free_base(*arg1)
    __free_base(*arg1)
    *arg1 = 0
    *arg1 = *arg2
    *arg2 = 0
    return arg1
}
