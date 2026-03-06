// 函数名称: sub_430dd0
// 虚拟地址: 0x430dd0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_tsub_430dd0(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    int32_t var_c = 0
    
    if (arg2 s> 0)
        int32_t* edi_1 = arg1
        int32_t var_1c = arg3
        int32_t eax_6
        
        do
            int32_t eax_2 = sub_4bab10(result)
            
            if (arg3 != 1)
                goto label_430e1c
            
            if (eax_2 != 0)
                int32_t var_2c_2 = 0xffffffff
                sub_4a8570(eax_2)
            label_430e1c:
                
                if (eax_2 != 0)
                    int32_t var_2c_3 = 0xffffffff
                    sub_4a8570(eax_2)
            
            int32_t var_18_1 = *edi_1
            int32_t eax_4 = sub_429080(&var_1c)
            
            if (eax_4 u> 5)
                sub_489550(eax_4, &data_5b2591, "Halt", 
                    "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamedialogs.cpp", 0x1288, 
                    "StoreDlgUpdateRow")
                
                if (IsDebuggerPresent() == 1)
                    breakpoint
                
                sub_489700()
                noreturn
            
            switch (eax_4)
                case 0
                    if (eax_2 == 0)
                        result += 1
                    else
                    label_430e72:
                        int32_t var_2c_4 = 0xffffffff
                        sub_4a8570(eax_2)
                        result += 1
                case 1
                    if (eax_2 != 0)
                        goto label_430e72
                    
                    result += 1
                case 2, 5
                    if (eax_2 != 0)
                        goto label_430e72
                    
                    result += 1
                case 4
                    if (eax_2 != 0)
                        goto label_430e72
                    
                    result += 1
            
            edi_1 = &edi_1[0x14]
            eax_6 = var_c + 1
            var_c = eax_6
        while (eax_6 s< arg2)
    
    return result
}
