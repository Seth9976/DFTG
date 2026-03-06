// 函数名称: sub_45ef30
// 虚拟地址: 0x45ef30
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_45ef30(void* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t ecx = *(arg1 + 0x2a8)
    int32_t ecx = *(arg1 + 0x2a8)
    int32_t result = 0
    int32_t result_1 = 0
    int32_t* esi
    
    if (ecx == 0)
        esi = nullptr
    else
        esi = sub_452cc0(ecx)
    
    int32_t* var_10 = esi
    int32_t* eax_2 = Unlock(&var_10)
    int32_t* edi = var_10
    
    while (esi != edi)
        if (esi == 0)
            sub_489550(eax_2, &data_5b2591, "gfx", "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 
                0x2ac, "Tiles::TileIt::operator *")
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        int32_t eax_3 = sub_45b410(esi)
        eax_2 = sub_45b4c0(esi)
        result = result_1
        
        if (eax_3 s< eax_2)
            eax_2 = arg2
            eax_2[result] = esi
            result += 1
            result_1 = result
        
        int32_t ecx_3 = esi[0x10]
        
        if (ecx_3 != 0)
            eax_2 = sub_452cc0(ecx_3)
            esi = eax_2
        else
            esi = nullptr
    
    sub_436380(arg2, &arg2[result], arg2, result, sub_45ef10)
    return result
}
