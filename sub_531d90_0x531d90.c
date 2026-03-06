// 函数名称: sub_531d90
// 虚拟地址: 0x531d90
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t (* __fastcallsub_531d90(void* arg1, int32_t arg2))[0x4]
{
    // 第一条实际指令: void* var_8 = arg1
    void* var_8 = arg1
    
    if (*(arg1 + 0x78) == arg2)
        return *(arg1 + 0x74)
    
    int32_t ebx = arg2 << 2
    int32_t eax_1 = data_1151ae0
    uint32_t (* result)[0x4]
    
    if (eax_1 == 0)
        int32_t var_18_1 = ebx
        result = _malloc()
    else
        result = eax_1(ebx, 
            "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\animationstate.c", 0x37c)
    
    if (result != 0)
        _memset(result, 0, ebx)
    
    _free(*(arg1 + 0x74))
    *(arg1 + 0x78) = arg2
    *(arg1 + 0x74) = result
    return result
}
