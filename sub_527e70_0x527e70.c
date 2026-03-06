// 函数名称: sub_527e70
// 虚拟地址: 0x527e70
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_527e70(int32_t* arg1, void* arg2)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    int32_t* edi = arg1
    char* eax = *edi
    int32_t ebx
    ebx.b = *eax
    int32_t esi_1 = zx.d(ebx.b) & 0x7f
    *edi = &eax[1]
    
    if (ebx.b s< 0)
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
    
    if (esi_1 != 0)
        return *(*(arg2 + 0x1c) + (esi_1 << 2) - 4)
    
    return 0
}
