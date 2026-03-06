// 函数名称: sub_454aa0
// 虚拟地址: 0x454aa0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_454aa0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* result_1 = arg1
    int32_t* result_1 = arg1
    int32_t var_1c
    char const* const var_18
    int32_t* result_2
    char* ecx
    
    if (*arg1 == 0)
        void* eax = sub_452b90(arg1[0xf])
        int32_t ecx_2 = *(eax + 0x2ac)
        int32_t* result
        
        if (ecx_2 == 0)
            result = nullptr
        else
            result = sub_452cc0(ecx_2)
        
        result_1 = result
        result_2 = Unlock(&result_1)
        int32_t* result_3 = result_1
        
        while (result != result_3)
            if (result == 0)
            label_454b2a:
                var_18 = "Tiles::TileIt::operator *"
                var_1c = 0x2ac
                ecx = &data_5e3f90
                goto label_454b83
            
            if (result != arg1)
                return result
            
            result = result[0x10]
            
            if (result != 0)
                result_2 = sub_452cc0(result)
                result = result_2
        
        int32_t ecx_3 = *(eax + 0x2b0)
        
        if (ecx_3 == 0)
            result = nullptr
        else
            result = sub_452cc0(ecx_3)
        
        result_1 = result
        result_2 = Unlock(&result_1)
        int32_t* result_4 = result_1
        
        while (result != result_4)
            if (result == 0)
                goto label_454b2a
            
            if (result != arg1)
                return result
            
            result = result[0x10]
            
            if (result != 0)
                result_2 = sub_452cc0(result)
                result = result_2
        
        var_18 = "GetOtherStartingChoice"
        var_1c = 0xa61
        ecx = "Halt"
    else
        var_18 = "GetOtherStartingChoice"
        var_1c = 0xa54
        ecx = "gfxOther.type == ROLLGFX_TILE"
    
    label_454b83:
    sub_489550(result_2, &data_5b2591, ecx, "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", var_1c, 
        var_18)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
