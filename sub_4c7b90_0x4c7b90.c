// 函数名称: sub_4c7b90
// 虚拟地址: 0x4c7b90
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t __fastcallsub_4c7b90(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: _fseek(*arg1, 0, 2)
    _fseek(*arg1, 0, 2)
    int32_t var_1c = *arg1
    uint32_t ebx = sub_587c01()
    uint32_t result
    
    if (ebx u>= 0xc && _fseek(*arg1, arg1[1], 0) == 0 && _fread(arg2, 0xc, 1, *arg1) == 1)
        arg1[1] += 0xc
        
        if (*arg2 == 0x5850434b && arg2[1] == 7 && ebx s>= arg2[2] * 0xa8)
            result.b = 1
            return result
    
    result.b = 0
    return result
}
