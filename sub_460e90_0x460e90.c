// 函数名称: sub_460e90
// 虚拟地址: 0x460e90
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

void* __fastcallsub_460e90(int32_t* arg1)
{
    // 第一条实际指令: int32_t* ebx = arg1
    int32_t* ebx = arg1
    int32_t* var_10 = ebx
    int32_t var_24
    char const* const var_20
    void* result
    char* ecx
    
    if (*ebx == 0)
        result = ebx[0xd]
        
        if (result == 4 || result == 5)
            void* edi_1 = sub_452b90(ebx[0xf])
            void* var_8_1 = edi_1
            int32_t ecx_3 = *(edi_1 + (ebx[0xd] << 2) + 0x29c)
            int32_t* i
            
            if (ecx_3 == 0)
                i = nullptr
            else
                i = sub_452cc0(ecx_3)
            
            int32_t* i_1 = i
            result = Unlock(&i_1)
            int32_t* i_2 = i_1
            
            if (i == i_2)
            label_460f61:
                result.b = 0
                return result
            
            while (i != 0)
                if (ebx == i)
                    goto label_460f61
                
                int32_t edi_2 = *(edi_1 + 0x4cc)
                int32_t edx_1 = 0
                
                if (edi_2 s<= 0)
                label_460f3c:
                    result.b = 1
                    return result
                
                result = var_8_1 + 0x33c
                
                while (*result != i[0x11])
                    edx_1 += 1
                    result += 4
                    
                    if (edx_1 s>= edi_2)
                        goto label_460f3c
                
                i = i[0x10]
                
                if (i != 0)
                    result = sub_452cc0(i)
                    i = result
                
                if (i == i_2)
                    goto label_460f61
                
                ebx = var_10
                edi_1 = var_8_1
            
            var_20 = "Tiles::TileIt::operator *"
            var_24 = 0x2ac
            ecx = &data_5e3f90
        else
            var_20 = "IsExploreTileOnTop"
            var_24 = 0x3c1b
            ecx = "gfxTest.tile.where == TW_DEVELOPMENTS || gfxTest.tile.where == TW_SETTLEMENTS"
    else
        var_20 = "IsExploreTileOnTop"
        var_24 = 0x3c1a
        ecx = "gfxTest.type == ROLLGFX_TILE"
    
    sub_489550(result, &data_5b2591, ecx, "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp", var_24, 
        var_20)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
