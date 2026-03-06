// 函数名称: sub_46cce0
// 虚拟地址: 0x46cce0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_46cce0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* var_4 = arg1
    int32_t* var_4 = arg1
    int32_t* edi = arg1
    
    if (*edi == 0)
        void* eax_1 = data_6cfe4c
        
        if (eax_1 == 0)
            sub_489550(eax_1, &data_5b2591, "gClient", 
                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        int32_t ecx = *(eax_1 + 0xa68)
        
        if (edi[0xf] == ecx)
            void* eax_2 = sub_452b90(ecx)
            
            if (edi[0xe] == 2)
                edi = sub_458560(eax_2, edi)
            
            if (data_632590 == 5)
                int32_t eax_4 = data_632594
                
                if (eax_4 != 4)
                    goto label_46cd67
                
                if (sub_453650(eax_2) != 0x13)
                    if (data_632590 == 5)
                        eax_4 = data_632594
                    label_46cd67:
                        
                        if (eax_4 != 5)
                            goto label_46cdab
                        
                        if (sub_453650(eax_2) != 0x15)
                            if (data_632590 == 5)
                                eax_4 = data_632594
                            label_46cdab:
                                
                                if (eax_4 != 2)
                                    goto label_46cddd
                                
                                if (sub_453650(eax_2) != 0xf)
                                    if (data_632590 == 5)
                                        eax_4 = data_632594
                                    label_46cddd:
                                        
                                        if (eax_4 == 3 && sub_453650(eax_2) == 0x11 && edi[0xd] == 5)
                                            return 3
                                else if (edi[0xd] == 4)
                                    return 2
                        else if (edi[0xd] == 3 && sub_45b4c0(edi) != 0 && sub_45b410(edi) != 0)
                            return 0x14
                else if (edi[0xd] == 3 && sub_45b410(edi) s< sub_45b4c0(edi))
                    return 0x14
    
    return 0
}
