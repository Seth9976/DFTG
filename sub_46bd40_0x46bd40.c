// 函数名称: sub_46bd40
// 虚拟地址: 0x46bd40
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_46bd40(int32_t arg1)
{
    // 第一条实际指令: void* result = sub_425e70()
    void* result = sub_425e70()
    void* ecx = data_6cfe4c
    void* result_2 = result
    char const* const var_10
    int32_t var_c
    char const* const var_8
    char* ecx_1
    
    if (ecx != 0)
        result = arg1 - *(ecx + 0xa68)
        void* result_1 = result + result_2
        
        if (arg1 - *(ecx + 0xa68) s>= 0)
            result_1 = result
        
        if (result_1 == data_6327d4)
            result.b = 0
            return result
        
        if (result_1 != 0)
            if (sub_454290(result_1).b != 0)
                result.b = 1
                return result
            
            if (data_6327d4 != data_6327d8)
                result = sub_425f20(arg1)
                
                if (data_6327d8 == result)
                    result.b = 1
                    return result
            
            result.b = 0
            return result
        
        var_8 = "IsOpponentZoomed"
        var_c = 0x81d
        var_10 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
        ecx_1 = "seat != SEAT_LOCAL"
    else
        var_8 = "GetClient"
        var_c = 0x75
        var_10 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx_1 = "gClient"
    
    sub_489550(result, &data_5b2591, ecx_1, var_10, var_c, var_8)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
