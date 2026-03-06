// 函数名称: sub_4773a0
// 虚拟地址: 0x4773a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_4773a0()
{
    // 第一条实际指令: double xmm0 = __ltod3(data_709198.d, data_709198:4)
    double xmm0 = __ltod3(data_709198.d, data_709198:4)
    xmm0 - 1000000000.0
    int32_t result
    result:1.b = (xmm0 == 1000000000.0 ? 1 : 0) << 6 | (is_unordered.q(xmm0, 1000000000.0) ? 1 : 0) << 2
        | (xmm0 < 1000000000.0 ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (p_1)
        data_709198.d = 0x3b9aca00
        data_709198:4 = 0
        return result
    
    sub_489550(result, &data_5b2591, "gNotifies.locks[lock].lockTime != 1e9", 
        "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 0x7369, "TakeLock")
    
    if (IsDebuggerPresent() != 1)
        noreturn sub_489700() __tailcall
    
    breakpoint
}
