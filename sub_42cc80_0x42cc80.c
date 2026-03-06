// 函数名称: sub_42cc80
// 虚拟地址: 0x42cc80
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void*sub_42cc80()
{
    // 第一条实际指令: void* result = data_62bbe8
    void* result = data_62bbe8
    
    if (result != 0 && *result != 0)
        result = sub_48a080(&data_62bbe8)
        
        if (*(result + 8) s> 0)
            int32_t eax = data_62bbec
            
            if (eax == 0)
                goto label_42ccea
            
            char const* const var_c
            int32_t var_8
            char const* const var_4
            char* ecx_5
            
            if (eax != 1)
                result = eax - 2
                
                if (eax == 2)
                    goto label_42ccea
                
                var_4 = "NameAddOK"
                var_8 = 0xc5b
            label_42cd57:
                var_c = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamedialogs.cpp"
                ecx_5 = "Halt"
                goto label_42cd66
            
            sub_438640()
        label_42ccea:
            sub_48a560(sub_437f10(*(data_6d00d8 + 0xbe4)), &data_62bbe8)
            sub_437ba0(data_6d00d8)
            sub_4361a0(4)
            result = data_6cfe4c
            
            if (result == 0)
                var_4 = "GetClient"
                var_8 = 0x75
                var_c = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
                ecx_5 = "gClient"
            label_42cd66:
                sub_489550(result, &data_5b2591, ecx_5, var_c, var_8, var_4)
                
                if (IsDebuggerPresent() != 1)
                    noreturn sub_489700() __tailcall
                
                breakpoint
            
            *(result + 0xa80) = 1
            result = data_62bbec
            
            if (result s< 0)
            label_42cd4d:
                var_4 = "NameAddOK"
                var_8 = 0xc6e
                goto label_42cd57
            
            if (result s> 1)
                if (result == 2)
                    return sub_42e090() __tailcall
                
                goto label_42cd4d
            
            data_62b220 = 4
    
    return result
}
