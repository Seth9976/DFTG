// 函数名称: ?ExFilterRethrow@@YAHPAU_EXCEPTION_POINTERS@@@Z
// 虚拟地址: 0x57ac69
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t?ExFilterRethrow@@YAHPAU_EXCEPTION_POINTERS@@@Z(int32_t* arg1)
{
    // 第一条实际指令: int32_t* eax_1 = *arg1
    int32_t* eax_1 = *arg1
    
    if (*eax_1 != 0xe06d7363 || eax_1[4] != 3
            || (eax_1[5] != 0x19930520 && eax_1[5] != 0x19930521 && eax_1[5] != 0x19930522)
            || eax_1[7] != 0)
        return 0
    
    *(sub_57a0a4() + 0x20) = 1
    return 1
}
