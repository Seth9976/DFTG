// 函数名称: sub_527090
// 虚拟地址: 0x527090
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_527090(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: int32_t eax = *arg3
    int32_t eax = *arg3
    
    if (eax == arg2)
        return 0
    
    *arg4 = eax
    void* eax_2 = *arg3
    
    if (eax_2 != arg2)
        char* ecx = eax_2
        
        while (*ecx != 0xa)
            eax_2 = &ecx[1]
            *arg3 = eax_2
            ecx = eax_2
            
            if (eax_2 == arg2)
                break
    
    arg4[1] = eax_2
    sub_527030(arg4)
    int32_t eax_3 = *arg3
    
    if (eax_3 != arg2)
        *arg3 = eax_3 + 1
    
    return 1
}
