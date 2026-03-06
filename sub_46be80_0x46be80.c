// 函数名称: sub_46be80
// 虚拟地址: 0x46be80
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_46be80(int32_t* arg1)
{
    // 第一条实际指令: char const* const var_10
    char const* const var_10
    int32_t var_c
    char const* const var_8
    void* result
    char* ecx
    
    if (*arg1 == 0)
        int32_t ecx_1 = arg1[0xf]
        
        if (ecx_1 == 0xffffffff)
            result.b = 0
            return result
        
        result = data_6cfe4c
        
        if (result != 0)
            if (ecx_1 != *(result + 0xa68))
                if (sub_478020(ecx_1).b != 0)
                    result = arg1[0xd]
                    
                    if (result == 5 || result == 4)
                        result.b = 1
                        return result
                
                bool cond:0_1
                
                if (arg1[0x1aa] != 0)
                    if (arg1[0x9e] == 1 && arg1[0xb8] == 0x22)
                        result.b = 1
                        return result
                    
                    if (arg1[0x1c] == 1)
                        cond:0_1 = arg1[0x36] != 0x22
                        goto label_46bf0a
                else if (arg1[0x5d] == 1)
                    cond:0_1 = arg1[0x77] != 0x22
                label_46bf0a:
                    
                    if (not(cond:0_1))
                        result.b = 1
                        return result
            
            result.b = 0
            return result
        
        var_8 = "GetClient"
        var_c = 0x75
        var_10 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
        ecx = "gClient"
    else
        var_8 = "IsDisplayTile"
        var_c = 0x5ac4
        var_10 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
        ecx = "gfx.type == ROLLGFX_TILE"
    
    sub_489550(result, &data_5b2591, ecx, var_10, var_c, var_8)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
