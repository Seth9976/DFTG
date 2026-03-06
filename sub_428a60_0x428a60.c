// 函数名称: sub_428a60
// 虚拟地址: 0x428a60
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_428a60(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: void* ecx = data_6cfe4c
    void* ecx = data_6cfe4c
    
    if (ecx == 0)
        sub_489550(arg1, &data_5b2591, "gClient", 
            "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
        
        if (IsDebuggerPresent() == 1)
            breakpoint
        
        sub_489700()
        noreturn
    
    int32_t eax = *(ecx + 0x824)
    int32_t result = arg4 + 1
    
    if (result s< eax)
        void* ecx_2 = ecx + 0x24 + (result << 4)
        int32_t* ebx_3 = ((result + 3) << 4) + data_6cfe4c
        int32_t eax_3 = eax
        void* var_c_1 = ecx_2
        
        do
            if (*ebx_3 s>= 0)
                int32_t eax_4 = 0
                
                if (arg2 s<= 0)
                    return result
                
                while (*ecx_2 != *(arg3 + (eax_4 << 2)))
                    eax_4 += 1
                    
                    if (eax_4 s>= arg2)
                        return result
                
                ecx_2 = var_c_1
                eax_3 = eax
            
            result += 1
            ecx_2 += 0x10
            ebx_3 = &ebx_3[4]
            var_c_1 = ecx_2
        while (result s< eax_3)
    
    return 0xffffffff
}
