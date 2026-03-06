// 函数名称: sub_527d20
// 虚拟地址: 0x527d20
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_527d20(int32_t* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    int32_t* edi = arg1
    char* eax = *edi
    int32_t ebx
    ebx.b = *eax
    int32_t result = zx.d(ebx.b) & 0x7f
    *edi = &eax[1]
    
    if (ebx.b s< 0)
        arg1.b = eax[1]
        *edi = &eax[2]
        result |= (zx.d(arg1.b) & 0x7f) << 7
        
        if (arg1.b s< 0)
            arg1.b = eax[2]
            *edi = &eax[3]
            result |= (zx.d(arg1.b) & 0x7f) << 0xe
            
            if (arg1.b s< 0)
                arg1.b = eax[3]
                *edi = &eax[4]
                result |= (zx.d(arg1.b) & 0x7f) << 0x15
                
                if (arg1.b s< 0)
                    arg1.b = eax[4]
                    *edi = &eax[5]
                    result |= zx.d(arg1.b) << 0x1c
    
    if (arg2 != 0)
        return result
    
    return result u>> 1 ^ neg.d(result & 1)
}
