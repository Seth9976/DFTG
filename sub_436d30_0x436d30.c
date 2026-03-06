// 函数名称: sub_436d30
// 虚拟地址: 0x436d30
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_436d30(void* arg1)
{
    // 第一条实际指令: void* result = *(arg1 + 0x14)
    void* result = *(arg1 + 0x14)
    char const* const var_14
    int32_t var_10
    char const* const var_c
    char* ecx_4
    
    if (result s> 3)
        result -= 0x3e8
        
        if (result u<= 1)
            result.b = 0
            return result
        
    label_436db5:
        var_c = "GameCanAddFriend"
        var_10 = 0xaa
        var_14 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gamesave.cpp"
        ecx_4 = "Halt"
    else
        if (result s>= 2)
            result.b = 0
            return result
        
        if (result == 0)
            result.b = 0
            return result
        
        void* result_1 = result
        result -= 1
        
        if (result_1 != 1)
            goto label_436db5
        
        if (*(sub_437f10(*(data_6d00d8 + 0xbe4)) + 0x230) == *(arg1 + 0x18))
            result.b = 0
            return result
        
        void* ecx_2 = data_6cfe4c
        result = nullptr
        
        if (ecx_2 != 0)
            void* ecx_3 = ecx_2 + 0x28
            
            while (true)
                if (result s>= *(ecx_2 + 0x824))
                    result.b = 1
                    return result
                
                if (*ecx_3 == *(arg1 + 0x18))
                    break
                
                result += 1
                ecx_3 += 0x10
            
            result.b = 0
            return result
        
        var_c = "GetClient"
        var_10 = 0x75
        var_14 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx_4 = "gClient"
    
    sub_489550(result, &data_5b2591, ecx_4, var_14, var_10, var_c)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
