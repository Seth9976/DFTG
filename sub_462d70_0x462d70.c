// 函数名称: sub_462d70
// 虚拟地址: 0x462d70
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_462d70(int32_t arg1, int32_t arg2)
{
    // 第一条实际指令: int32_t edi = 0
    int32_t edi = 0
    int32_t var_8 = 0
    void* esi_1 = sub_452b90(arg1) + (arg2 << 2)
    int32_t i = *(esi_1 + 0x29c)
    
    if (i != 0)
        do
            edi += 1
            i = *(sub_452de0(i) + 0x10)
        while (i != 0)
        
        var_8 = edi
    
    int32_t ebx = 0
    data_6327d0 = edi - 1
    int32_t ecx_1 = *(esi_1 + 0x29c)
    int32_t* esi_2
    
    if (ecx_1 == 0)
        esi_2 = nullptr
    else
        esi_2 = sub_452cc0(ecx_1)
    
    int32_t* var_c = esi_2
    int32_t* eax_4 = Unlock(&var_c)
    int32_t* edi_1 = var_c
    
    if (esi_2 != edi_1)
        while (true)
            int32_t var_24_2
            char const* const var_20_2
            char* ecx_3
            
            if (esi_2 == 0)
                var_20_2 = "Tiles::TileIt::operator *"
                var_24_2 = 0x2ac
                ecx_3 = &data_5e3f90
            else
                int32_t var_20_1 = var_8
                eax_4 = sub_456050(eax_4, esi_2, ecx_1, data_6327d0, ebx)
                
                if (*esi_2 != 0)
                    var_20_2 = "GetRollT"
                    var_24_2 = 0x8fb
                    ecx_3 = "gfx.type == ROLLGFX_TILE"
                else
                    eax_4 = esi_2[0x22a]
                    (&data_632598)[ebx] = eax_4
                    ebx += 1
                    ecx_1 = esi_2[0x10]
                    
                    if (ecx_1 != 0)
                        eax_4 = sub_452cc0(ecx_1)
                        esi_2 = eax_4
                    else
                        esi_2 = nullptr
                    
                    if (esi_2 == edi_1)
                        break
                    
                    continue
            
            sub_489550(eax_4, &data_5b2591, ecx_3, "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", 
                var_24_2, var_20_2)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
    
    data_126bdb8
    data_6326b0 = var_8
    return sub_4c5ce0()
}
