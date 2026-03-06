// 函数名称: sub_469f70
// 虚拟地址: 0x469f70
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_469f70(int32_t arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t var_8 = arg1
    int32_t var_8 = arg1
    
    if (arg1 == 0)
        return 0xffffffff
    
    int32_t result = 0
    void* const eax_1 = &data_5b6ba8
    int32_t var_1c
    
    while (true)
        if (*(eax_1 + 4) == arg1 || *(eax_1 + 0x1c) == arg1)
            int32_t ecx_1 = 0
            bool cond:0_1 = *(eax_1 + 0x1c) == arg1
            eax_1 = *eax_1
            
            if (cond:0_1)
                ecx_1 = 1
            
            *arg2 = ecx_1
            
            if (eax_1 u> 3)
                char const* const var_18_3 = "FindCardIdxByName"
                var_1c = 0x531e
            else
                switch (jump_table_46a050[eax_1])
                    case 0x469ff0
                        return result
                    case 0x469ff9
                        char const* const var_18_2 = "FindCardIdxByName"
                        var_1c = 0x531a
            
            break
        
        int32_t ecx = *eax_1
        
        if (ecx u> 3)
            char const* const var_18_1 = "FindCardIdxByName"
            var_1c = 0x532e
            break
        
        switch (jump_table_46a040[ecx])
            case 0x469faa
                result += 1
        
        eax_1 += 0x34
        
        if (eax_1 != 0x5b7ab0)
            continue
        
        char const* const var_18 = "FindCardIdxByName"
        var_1c = 0x5332
        break
    
    sub_489550(eax_1, &data_5b2591, "Halt", "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", var_1c, 
        "FindCardIdxByName")
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
