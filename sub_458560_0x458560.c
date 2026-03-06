// 函数名称: sub_458560
// 虚拟地址: 0x458560
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t* __fastcallsub_458560(void* arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t ecx = *(arg1 + 0x2a8)
    int32_t ecx = *(arg1 + 0x2a8)
    int32_t* i
    
    if (ecx == 0)
        i = nullptr
    else
        i = sub_452cc0(ecx)
    
    int32_t* i_1 = i
    int32_t* i_2 = Unlock(&i_1)
    int32_t* i_3 = i_1
    int32_t var_1c
    char const* const var_18_1
    char* ecx_1
    
    if (i == i_3)
    label_4585d5:
        var_18_1 = "GetFactionOtherSide"
        var_1c = 0x1b62
        ecx_1 = "Halt"
    else
        while (i != 0)
            i_2 = *i[0xc]
            
            if ((i_2 == 0 || i_2 == 1) && i != arg2)
                return i
            
            i = i[0x10]
            
            if (i != 0)
                i_2 = sub_452cc0(i)
                i = i_2
            
            if (i == i_3)
                goto label_4585d5
        
        var_18_1 = "Tiles::TileIt::operator *"
        var_1c = 0x2ac
        ecx_1 = &data_5e3f90
    
    sub_489550(i_2, &data_5b2591, ecx_1, "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", var_1c, 
        var_18_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
