// 函数名称: sub_501f70
// 虚拟地址: 0x501f70
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __fastcallsub_501f70(void* arg1, float arg2 @ xmm1)
{
    // 第一条实际指令: int128_t* eax = data_114e818
    int128_t* eax = data_114e818
    char const* const var_28
    int32_t var_24
    char const* const var_20
    char* ecx
    
    if (eax == 0)
        var_20 = "GetGameData"
        var_24 = 0x45
        var_28 = "d:\ax\trunk\ax2017\engine\game.h"
        ecx = "gpGameData"
    label_5020d2:
        sub_489550(eax, &data_5b2591, ecx, var_28, var_24, var_20)
        
        if (IsDebuggerPresent() != 1)
            sub_489700()
            noreturn
        
        breakpoint
    
    eax = eax[1].d
    *(eax + 0x1c) += 1
    float xmm0_1 = *(arg1 + 0x5c)
    *(arg1 + 0x54) += 1
    *(arg1 + 0x58) = arg2
    *(arg1 + 0x5c) = xmm0_1 + arg2
    float xmm0_3 = *(arg1 + 0x50)
    
    if (not(xmm0_3 f<= 0))
        float xmm0_4 = xmm0_3 - arg2
        *(arg1 + 0x50) = xmm0_4
        
        if (not(0f < xmm0_4))
            *(arg1 + 0x76) = 1
    
    int32_t* i = *(arg1 + 8)
    
    while (i != 0)
        int32_t* i_1 = i
        
        if (i == 0)
            var_20 = "XList<struct ParticleEmitter>::GetNextIter"
            var_24 = 0x1a1
            var_28 = "d:\ax\trunk\ax2017\engine\xlist.h"
            ecx = "iter != NULL"
            goto label_5020d2
        
        int32_t* eax_1 = &i[0xbf]
        int32_t* i_2 = i
        i = *eax_1
        eax = sub_501ec0(i_2)
        
        if (eax.b == 0)
            void* esi_1 = nullptr
            
            while (true)
                if (esi_1 != 0)
                    esi_1 = *(esi_1 + 0x2fc)
                else
                    esi_1 = i_2[0xb4]
                
                if (esi_1 == 0)
                    break
                
                sub_4fd2b0(esi_1)
            
            sub_507730(&i_2[0xb4])
            void* eax_2 = i_2[0xb9]
            *(eax_2 + 0x14) -= 1
            void* ecx_4 = i_1[0xc0]
            int32_t eax_3 = *eax_1
            
            if (ecx_4 == 0)
                *(arg1 + 8) = eax_3
            else
                *(ecx_4 + 0x2fc) = eax_3
            
            void* ecx_5 = *eax_1
            int32_t eax_4 = i_1[0xc0]
            
            if (ecx_5 == 0)
                *(arg1 + 0xc) = eax_4
            else
                *(ecx_5 + 0x300) = eax_4
            
            *(arg1 + 0x10) -= 1
            sub_4fd4b0(i_1)
            eax = sub_4984f0(i_1, 0x304)
    
    if (*(arg1 + 0x10) == 0)
        *(arg1 + 0x76) = 1
    
    int32_t result = *(arg1 + 0x48)
    *(arg1 + 0x68) = *(arg1 + 0x40)
    *(arg1 + 0x70) = result
    return result
}
