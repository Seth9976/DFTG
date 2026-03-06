// 函数名称: sub_531b00
// 虚拟地址: 0x531b00
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_531b00(void* arg1, int32_t arg2)
{
    // 第一条实际指令: void* var_8 = arg1
    void* var_8 = arg1
    
    if (arg2 s< *(arg1 + 4))
        return *(*(arg1 + 8) + (arg2 << 2))
    
    int32_t eax_2 = data_1151ae0
    uint32_t (* eax_3)[0x4]
    
    if (eax_2 == 0)
        void* var_18_1 = (arg2 << 2) + 4
        eax_3 = _malloc()
    else
        eax_3 = eax_2((arg2 << 2) + 4, 
            "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\animationstate.c", 0x325)
    
    if (eax_3 != 0)
        _memset(eax_3, 0, (arg2 << 2) + 4)
    
    sub_579300(eax_3, *(arg1 + 8), *(arg1 + 4) << 2)
    _free(*(arg1 + 8))
    *(arg1 + 8) = eax_3
    *(arg1 + 4) = arg2 + 1
    return 0
}
