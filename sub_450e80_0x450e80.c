// 函数名称: sub_450e80
// 虚拟地址: 0x450e80
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_450e80(void* arg1)
{
    // 第一条实际指令: _free(*(arg1 + 0x64))
    _free(*(arg1 + 0x64))
    _free(*(arg1 + 0x68))
    _free(*(arg1 + 0x40))
    _free(*(arg1 + 0x5c))
    _free(*(arg1 + 0x6c))
    _free(*(arg1 + 0x60))
    _free(*(arg1 + 0x44))
    _free(*(arg1 + 0x70))
    _free(*(arg1 + 0x74))
    int32_t* eax = *(arg1 + 0x48)
    int32_t i = 0
    
    if (*eax s> 0)
        do
            _free(*(*(arg1 + 0x4c) + (i << 2)))
            _free(*(*(arg1 + 0x50) + (i << 2)))
            eax = *(arg1 + 0x48)
            i += 1
        while (i s< *eax)
    
    _free(eax)
    _free(*(arg1 + 0x4c))
    _free(*(arg1 + 0x50))
    int32_t i_1 = 0
    
    if (*(arg1 + 0x2c) + 1 s> 0)
        do
            _free(*(*(arg1 + 0x54) + (i_1 << 2)))
            _free(*(*(arg1 + 0x58) + (i_1 << 2)))
            i_1 += 1
        while (i_1 s< *(arg1 + 0x2c) + 1)
    
    _free(*(arg1 + 0x54))
    _free(*(arg1 + 0x58))
    int32_t i_2 = 0
    
    if (*(arg1 + 0x88) s> 0)
        do
            _free(*(*(arg1 + 0x80) + (i_2 << 2)))
            i_2 += 1
        while (i_2 s< *(arg1 + 0x88))
    
    int32_t var_c_6 = *(arg1 + 0x80)
    *(arg1 + 0x88) = 0
    _free(var_c_6)
    _free(*(arg1 + 0x84))
    int32_t i_3 = 0
    
    if (*(arg1 + 0x28) s> 0)
        do
            int32_t eax_11 = *(*(arg1 + 0x90) + (i_3 << 2))
            
            if (eax_11 != 0)
                _free(eax_11)
            
            i_3 += 1
        while (i_3 s< *(arg1 + 0x28))
    
    return _free(*(arg1 + 0x90))
}
