// 函数名称: sub_51a4e0
// 虚拟地址: 0x51a4e0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_51a4e0()
{
    // 第一条实际指令: int32_t* eax = sub_498440(0x1c)
    int32_t* eax = sub_498440(0x1c)
    eax[3] += 1
    int32_t* ecx = *eax
    
    if (ecx == 0)
        sub_4982d0(eax)
        ecx = *eax
    
    int32_t result = *ecx
    *eax = result
    *ecx = 0
    data_1151b0c = 0x43c80000
    data_1151b10 = 0x44160000
    data_1151ad4 = ecx
    __builtin_memcpy(&ecx[1], 
        "\x05\x00\x00\x00\x07\x00\x00\x00\x06\x00\x00\x00\x05\x00\x00\x00\x05\x00\x00\x00\x05\x00\x00\x00", 
        0x18)
    return result
}
