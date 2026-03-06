// 函数名称: sub_4bcb50
// 虚拟地址: 0x4bcb50
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __convention("regparm")sub_4bcb50(int32_t arg1, int32_t arg2, int32_t* arg3, int32_t* arg4)
{
    // 第一条实际指令: __builtin_memset(arg4, 0, 0x34)
    __builtin_memset(arg4, 0, 0x34)
    arg4[0xe] = 0
    arg4[0xd] = 0xffffffff
    
    if (arg3[1] != 1)
        arg4[0xc] = 1
        *arg4 = sub_498600(*arg3, &arg3[3])
        arg4[1] = sub_498600(*arg3, &arg3[8])
    else
        int32_t eax = arg3[0x1c]
        
        if (eax s> 3)
            sub_489550(eax, &data_5b2591, "expr.numKeys <= MAX_GRAPH_KEYS", 
                "d:\ax\trunk\ax2017\engine\ui2.cpp", 0x6cd, "PropGraphSet")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        arg4[0xc] = eax
        int32_t i_1 = 0
        
        if (arg3[0x1c] s> 0)
            void* ebx = &arg4[3]
            void* esi_1 = &arg3[2]
            int32_t i
            
            do
                *(ebx - 4) = *(esi_1 + 0x2c)
                *ebx = *esi_1
                *(ebx - 0xc) = sub_498600(*arg3, esi_1 + 4)
                *(ebx - 8) = sub_498600(*arg3, esi_1 + 0x18)
                esi_1 += 0x34
                ebx += 0x10
                i = i_1 + 1
                i_1 = i
            while (i s< arg3[0x1c])
    
    return arg4
}
