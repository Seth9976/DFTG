// 函数名称: sub_42def0
// 虚拟地址: 0x42def0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_42def0(int32_t* arg1)
{
    // 第一条实际指令: void* edi = data_6cfe4c
    void* edi = data_6cfe4c
    void* i
    
    if (edi != 0)
        char var_21_1 = 0
        void* var_14_1 = edi
        int32_t var_20_1 = 0
        
        if (edi != 0)
            void* i_1 = nullptr
            int32_t* ecx_1 = edi + 0x848
            sub_426820(ecx_1, &i_1)
            i = i_1
            int32_t ecx_2 = 0
            int32_t ebx_1 = 0
            
            if (i != 0xffffffff)
                int32_t var_18_1 = 0
                var_20_1 = 0
                
                do
                    if (*(i + 0x1d0) == 0)
                        if (edi == 0)
                            goto label_42e06a
                        
                        int32_t ebx_2 = *(i + 0x1e0)
                        
                        if (*(var_14_1 + 0x834) != 2 || *(var_14_1 + 0x838) != ebx_2)
                            i = sub_42dd10(i + 8)
                            
                            if (i == 0xf || i == 0x11)
                                *arg1 = 2
                                arg1[1] = ebx_2
                                
                                if (var_21_1 != 0)
                                    goto label_42e003
                                
                                ebx_1 = var_20_1
                                
                                if (ebx_1 == 0)
                                    ebx_1 = *arg1
                                    var_20_1 = ebx_1
                                    var_18_1 = arg1[1]
                            else
                                ebx_1 = var_20_1
                            
                            edi = data_6cfe4c
                        else
                            ebx_1 = var_20_1
                            var_21_1 = 1
                    
                    sub_426820(ecx_1, &i_1)
                    i = i_1
                while (i != 0xffffffff)
                
                ecx_2 = var_18_1
            
            if (ebx_1 != 0)
                *arg1 = ebx_1
                arg1[1] = ecx_2
            label_42e003:
                i.b = 1
                return i
            
            if (edi != 0)
                if (*(edi + 0x834) != 1)
                    i = sub_437f10(*(data_6d00d8 + 0xbe4))
                    
                    if (*(i + 0x244) != 0)
                        *arg1 = 1
                        arg1[1] = *(i + 0x244)
                        int32_t eax_1
                        eax_1.b = 1
                        return eax_1
                
                i.b = 0
                return i
    
    label_42e06a:
    sub_489550(i, &data_5b2591, "gClient", "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 
        0x75, "GetClient")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
