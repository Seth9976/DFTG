// 函数名称: sub_4564b0
// 虚拟地址: 0x4564b0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_4564b0(int32_t* arg1)
{
    // 第一条实际指令: int32_t eax = *arg1
    int32_t eax = *arg1
    char const* const var_10
    int32_t var_c
    char const* const var_8
    int32_t result
    char* ecx
    
    if (eax == 0)
        result = sub_46bc50(arg1)
        
        if (result.b != 0)
            return sub_4561d0() __tailcall
        
        void* ecx_2 = data_6cfe4c
        
        if (ecx_2 != 0)
            void* eax_4
            int32_t ecx_4
            eax_4, ecx_4 = sub_452b90(*(ecx_2 + 0xa68))
            int32_t var_8_1 = 1
            sub_456050(eax_4, arg1, ecx_4, 0, 0)
            data_6327d0 = 0
            int32_t eax_5 = sub_454390(arg1)
            data_126bdb8
            data_632598 = eax_5
            data_6326b0 = 1
            sub_4c5ce0()
            return sub_46a490(0x13, *(arg1[0xc] + 4)) __tailcall
        
        var_8 = "GetClient"
        var_c = 0x75
        var_10 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx = "gClient"
    else
        if (eax == 1)
            data_62b248 = 0x28
            result = arg1[2]
            data_632a0c = result
            return result
        
        result = eax - 2
        
        if (eax == 2)
            return result
        
        var_8 = "RollGfxInspect"
        var_c = 0xf85
        var_10 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
        ecx = "Halt"
    
    sub_489550(result, &data_5b2591, ecx, var_10, var_c, var_8)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
