// 函数名称: sub_4322a0
// 虚拟地址: 0x4322a0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_4322a0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    // 第一条实际指令: int32_t var_8 = arg3
    int32_t var_8 = arg3
    sub_4b2440(arg4, sub_431e30)
    sub_480430(&data_6cfe74)
    int32_t eax_1 = sub_429080(&data_6cfe74)
    
    switch (eax_1)
        case 2, 5
            char* const ecx_3 = &data_5b2591
            char* eax_3 = *(sub_437f10(*(data_6d00d8 + 0xbe4)) + 0x23c)
            
            if (eax_3 != 0)
                ecx_3 = eax_3
            
            char* const eax_4 = &data_5b2591
            
            while (true)
                char edx_3 = *ecx_3
                
                if (edx_3 == *eax_4)
                    if (edx_3 == 0)
                        break
                    
                    edx_3 = ecx_3[1]
                    
                    if (edx_3 == eax_4[1])
                        ecx_3 = &ecx_3[2]
                        eax_4 = &eax_4[2]
                        
                        if (edx_3 != 0)
                            continue
                        
                        break
                
                break
            
            goto label_43234a
        case 4
        label_43234a:
            int32_t var_14 = 0xffffffff
            sub_4a8570(arg4)
            int32_t var_18 = 0xffffffff
            sub_4a8570(arg4)
            char eax_7 = data_6cfe6c
            
            if (eax_7 == 0)
                int32_t var_14_1 = 0xffffffff
                sub_4a8570(arg4)
                eax_7 = data_6cfe6c
            
            uint32_t eax_8 = zx.d(eax_7)
            uint32_t var_14_2 = eax_8
            int32_t var_24 = arg4
            sub_41e5c0(eax_8, arg4, data_6cfe70)
            char result = sub_41e330(data_6cfe70, &var_8)
            
            if (result != 0)
                int32_t var_14_3 = 0xffffffff
                result = sub_4a8570(arg4)
                
                if ((var_8.b & 2) != 0)
                    int32_t var_14_4 = 0xffffffff
                    result = sub_4a8570(arg4)
                
                if ((var_8.b & 4) != 0)
                    int32_t var_14_5 = 0xffffffff
                    return sub_4a8570(arg4)
            
            return result
    
    sub_489550(eax_1, &data_5b2591, "Halt", 
        "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 0x13f7, "StoreItemUpdate")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
