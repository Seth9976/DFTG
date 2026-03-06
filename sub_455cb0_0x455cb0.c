// 函数名称: sub_455cb0
// 虚拟地址: 0x455cb0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_455cb0(int32_t* arg1, int32_t* arg2)
{
    // 第一条实际指令: int32_t* var_8 = arg1
    int32_t* var_8 = arg1
    int32_t var_1c
    char const* const var_18
    int32_t* eax
    char* ecx
    
    if (*arg2 == 0)
        eax = *arg1
        
        if (eax == arg2[0xf])
            int32_t result = 0
            int32_t ecx_1 = arg1[arg2[0xd] + 0xa7]
            int32_t* ecx_2
            
            if (ecx_1 == 0)
                ecx_2 = nullptr
            else
                ecx_2 = sub_452cc0(ecx_1)
            
            var_8 = ecx_2
            eax = Unlock(&var_8)
            int32_t* esi_1 = var_8
            
            while (ecx_2 != esi_1)
                if (ecx_2 == 0)
                    var_18 = "Tiles::TileIt::operator *"
                    var_1c = 0x2ac
                    ecx = &data_5e3f90
                    goto label_455d68
                
                if (ecx_2 == arg2)
                    return result
                
                ecx_2 = ecx_2[0x10]
                result += 1
                
                if (ecx_2 != 0)
                    eax = sub_452cc0(ecx_2)
                    ecx_2 = eax
            
            var_18 = "ComputeTileOrder"
            var_1c = 0xe5a
            ecx = "Halt"
        else
            var_18 = "ComputeTileOrder"
            var_1c = 0xe51
            ecx = "pgui.who == gfxSource.tile.owner"
    else
        var_18 = "ComputeTileOrder"
        var_1c = 0xe50
        ecx = "gfxSource.type == ROLLGFX_TILE"
    
    label_455d68:
    sub_489550(eax, &data_5b2591, ecx, "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", var_1c, 
        var_18)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
