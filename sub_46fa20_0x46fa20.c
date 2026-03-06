// 函数名称: sub_46fa20
// 虚拟地址: 0x46fa20
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_46fa20(int32_t arg1, int32_t arg2, int32_t arg3, int128_t* arg4)
{
    // 第一条实际指令: void* i = data_632a20
    void* i = data_632a20
    int32_t esi = data_632a18
    bool cond:0 = i u< esi
    
    if (i != esi)
        goto label_46fb27
    
    int32_t esi_1 = 0xffffffff
    i = data_632a10
    void* i_2 = nullptr
    void* ecx_2 = i + data_632a14 * 0x24
    char const* const var_24
    int32_t var_20
    char const* const var_1c
    char* ecx_3
    
    if (i u>= ecx_2)
    label_46fa70:
        var_1c = "FreeLRUTileTexture"
        var_20 = 0x64ad
        ecx_3 = "best != NULL"
        var_24 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
    else
        while ((*(i + 0x20) & 0xffff0000) == 0)
            i += 0x24
            
            if (i u>= ecx_2)
                goto label_46fa70
        
        if (i == 0xffffffff)
            goto label_46fa70
        
        do
            if (esi_1 == 0xffffffff || *i s< esi_1)
                esi_1 = *i
                i_2 = i
            
            i += 0x24
            
            if (i u>= ecx_2)
            label_46fab4:
                i = 0xffffffff
            else
                while ((*(i + 0x20) & 0xffff0000) == 0)
                    i += 0x24
                    
                    if (i u>= ecx_2)
                        goto label_46fab4
        while (i != 0xffffffff)
        
        if (i_2 == 0)
            goto label_46fa70
        
        if (esi_1 s< data_632a04)
            i = *(i_2 + 0x1c)
            
            if (i != 0xffffffff)
                *(i + &data_632a40) = 0
                int32_t ecx_4 = data_632a1c
                data_632a1c = zx.d(*(i_2 + 0x20))
                *(i_2 + 0x20) = ecx_4
                i = data_632a20 - 1
                cond:0 = i u< data_632a18
                data_632a20 = i
            label_46fb27:
                
                if (cond:0)
                    i = data_632a1c
                    void* i_1 = data_632a14
                    
                    if (i u<= i_1)
                        int32_t edx = data_632a10
                        void* eax_2
                        
                        if (i != i_1)
                            i_1 = i
                            eax_2 = *(edx + i * 0x24 + 0x20)
                        else
                            eax_2 = i_1 + 1
                            data_632a14 = eax_2
                        
                        data_632a1c = eax_2
                        int32_t* edx_1 = edx + i_1 * 0x24
                        __builtin_memset(edx_1, 0, 0x20)
                        edx_1[8] = data_632a24 << 0x10 | i_1
                        int32_t eax_9 = data_632a24 + 1
                        
                        if (eax_9 == 0x10000)
                            eax_9 = 1
                        
                        data_632a20 += 1
                        data_632a24 = eax_9
                        *(((arg2 + (arg3 << 1)) << 2) + &data_62ce60) = edx_1[8]
                        
                        for (i = nullptr; i s< 4; i += 1)
                            if (*(i + &data_632a40) == 0)
                                *(i + &data_632a40) = 1
                                edx_1[1] = arg3
                                edx_1[2] = arg2
                                edx_1[7] = i
                                *(edx_1 + 0xc) = *arg4
                                *edx_1 = data_632a04
                                return *((i << 2) + &data_632a2c)
                        
                        var_1c = "RttIdxAlloc"
                        var_20 = 0x64c2
                        ecx_3 = "Halt"
                        var_24 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
                    else
                        var_1c = "DataArray<struct TileTexture>::DataArrayAlloc"
                        var_20 = 0xf5
                        var_24 = "d:\ax\trunk\ax2017\engine\dataarray.h"
                        ecx_3 = "mFreeListHead <= mMaxUsedCount"
                else
                    var_1c = "DataArray<struct TileTexture>::DataArrayAlloc"
                    var_20 = 0xf4
                    var_24 = "d:\ax\trunk\ax2017\engine\dataarray.h"
                    ecx_3 = "mUsedCount < mMaxSize"
            else
                var_1c = "FreeLRUTileTexture"
                var_20 = 0x64b1
                ecx_3 = "idx != -1"
                var_24 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
        else
            var_1c = "FreeLRUTileTexture"
            var_20 = 0x64ae
            ecx_3 = "bestFrame < gRollClient.gameFrame"
            var_24 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
    
    sub_489550(i, &data_5b2591, ecx_3, var_24, var_20, var_1c)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
