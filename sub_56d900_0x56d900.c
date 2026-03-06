// 函数名称: sub_56d900
// 虚拟地址: 0x56d900
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

uint32_t (* __convention("regparm")sub_56d900(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7))[0x4]
{
    // 第一条实际指令: int32_t eax = data_1151ae0
    int32_t eax = data_1151ae0
    *arg3 = arg2
    int32_t* eax_1
    
    if (eax == 0)
        int32_t var_14_1 = 0xc
        eax_1 = _malloc()
    else
        eax_1 = eax(0xc, "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\spanimation.c", 0x52)
    
    if (eax_1 != 0)
        *eax_1 = 0
        eax_1[1] = 0
    
    arg3[1] = eax_1
    eax_1[2] = arg5
    *arg3[1] = arg6
    *(arg3[1] + 4) = arg7
    int32_t eax_5 = data_1151ae0
    uint32_t (* result)[0x4]
    
    if (eax_5 == 0)
        void* var_14_2 = arg4 * 0x4c - 0x4c
        result = _malloc()
    else
        result = eax_5(arg4 * 0x4c - 0x4c, 
            "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\spanimation.c", 0x75)
    
    uint32_t (* result_1)[0x4] = result
    
    if (result_1 != 0)
        result = _memset(result_1, 0, arg4 * 0x4c - 0x4c)
    
    arg3[2] = result_1
    return result
}
