// 函数名称: sub_47f910
// 虚拟地址: 0x47f910
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_47f910(int32_t arg1)
{
    // 第一条实际指令: int32_t var_3c[0xc]
    int32_t var_3c[0xc]
    int32_t eax_1 = __security_cookie ^ &var_3c
    int32_t* result = sub_47f610()
    data_6329f8 = 0
    data_6329fc = 0
    
    if (arg1 != 1)
        void* eax_2 = data_6cfe4c
        
        if (eax_2 == 0)
            sub_489550(eax_2, &data_5b2591, "gClient", 
                "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp", 0x75, "GetClient")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        int32_t* ecx_1 = data_126be18
        
        if (*(*(eax_2 + 0xa68) * 0x1bc + data_632804 + 0x1a4) == 0)
            ecx_1 = data_126be14
        
        sub_4c5670(ecx_1, &var_3c)
        result = sub_4c5920(&var_3c)
    else
        data_6329f8 = 3
        data_632840 = 1
        data_62b220 = 0x24
    
    data_62b1d0 = 0x23
    @__security_check_cookie@4(eax_1 ^ &var_3c)
    return result
}
