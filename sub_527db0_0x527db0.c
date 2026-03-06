// 函数名称: sub_527db0
// 虚拟地址: 0x527db0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char* __fastcallsub_527db0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* edi = arg1
    int32_t* edi = arg1
    char* eax = *edi
    char edx = *eax
    void* esi_1 = zx.d(edx) & 0x7f
    *edi = &eax[1]
    
    if (edx s< 0)
        arg1.b = eax[1]
        *edi = &eax[2]
        esi_1 |= (zx.d(arg1.b) & 0x7f) << 7
        
        if (arg1.b s< 0)
            arg1.b = eax[2]
            *edi = &eax[3]
            esi_1 |= (zx.d(arg1.b) & 0x7f) << 0xe
            
            if (arg1.b s< 0)
                arg1.b = eax[3]
                *edi = &eax[4]
                esi_1 |= (zx.d(arg1.b) & 0x7f) << 0x15
                
                if (arg1.b s< 0)
                    arg1.b = eax[4]
                    *edi = &eax[5]
                    esi_1 |= zx.d(arg1.b) << 0x1c
    
    if (esi_1 == 0)
        return 0
    
    int32_t eax_15 = data_1151ae0
    char* result
    
    if (eax_15 == 0)
        void* var_10_1 = esi_1
        result = _malloc()
    else
        result = eax_15(esi_1, 
            "d:\ax\trunk\ax2017\engine\externalcode\spine-c\src\spine\skeletonbinary.c", 0x95)
    
    sub_579300(result, *edi, esi_1 - 1)
    *edi += esi_1 - 1
    *(esi_1 + result - 1) = 0
    return result
}
