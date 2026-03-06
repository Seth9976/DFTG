// 函数名称: sub_51c350
// 虚拟地址: 0x51c350
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

int32_t __convention("regparm")sub_51c350(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t arg4, int32_t arg5)
{
    // 第一条实际指令: int32_t* var_c = arg3
    int32_t* var_c = arg3
    var_c = arg2
    int32_t* ebx = arg3[0x15]
    
    if (ebx != 0)
        goto label_51c404
    
    int32_t* eax = sub_498440(0x2e0)
    eax[3] += 1
    ebx = *eax
    
    if (ebx == 0)
        sub_4982d0(eax)
        ebx = *eax
    
    *eax = *ebx
    int32_t ecx_1 = _memset(ebx, 0, 0x2e0)
    int128_t xmm0_1 = data_5d3688.o
    int32_t var_28_1 = ecx_1
    ebx[0xb4] = *arg3
    var_28_1.o = xmm0_1
    int32_t eax_3 = ov_open_callbacks(ebx, ebx, 0, 0, var_28_1)
    int32_t var_20_1
    char const* const var_1c_1
    int32_t result
    char const* const ecx_4
    
    if (eax_3 s>= 0)
        arg3[0x15] = ebx
    label_51c404:
        int32_t ecx_6 = *(ov_info(ebx, 0xffffffff) + 4) * 2
        int32_t eax_6
        int32_t edx
        edx:eax_6 = sx.q(var_c)
        result = divs.dp.d(edx:eax_6, ecx_6)
        int32_t result_1 = result
        
        if (mods.dp.d(edx:eax_6, ecx_6) == 0)
            int32_t esi_3 = arg5
            int32_t eax_8
            int32_t edx_2
            edx_2:eax_8 = sx.q(esi_3)
            result = divs.dp.d(edx_2:eax_8, ecx_6)
            
            if (mods.dp.d(edx_2:eax_8, ecx_6) == 0)
                result = ov_pcm_tell(ebx)
                
                if (result == result_1)
                label_51c46b:
                    int32_t edi_1 = arg4
                    
                    if (esi_3 s> 0)
                        while (true)
                            result = ov_read(ebx, edi_1, esi_3, 0, 2, 1, &var_c)
                            int32_t var_20_4
                            char* ecx_7
                            
                            if (result s<= 0)
                                char const* const var_1c_6 = "SoundOggReadBits"
                                var_20_4 = 0x1a6
                                ecx_7 = "bytes_read > 0"
                            else if (result s> esi_3)
                                char const* const var_1c_5 = "SoundOggReadBits"
                                var_20_4 = 0x1a7
                                ecx_7 = "bytes_read <= bytesLeft"
                            else
                                esi_3 -= result
                                edi_1 += result
                                
                                if (esi_3 s<= 0)
                                    break
                                
                                continue
                            
                            sub_489550(result, &data_5b2591, ecx_7, 
                                "d:\ax\trunk\ax2017\engine\soundogg.cpp", var_20_4, "SoundOggReadBits")
                            
                            if (IsDebuggerPresent() == 1)
                                breakpoint
                            
                            sub_489700()
                            noreturn
                    
                    return result
                
                int32_t eax_10
                int32_t edx_4
                edx_4:eax_10 = sx.q(result_1)
                result = ov_pcm_seek(ebx, eax_10, edx_4)
                
                if (result == 0)
                    goto label_51c46b
                
                var_1c_1 = "SoundOggReadBits"
                var_20_1 = 0x19b
                ecx_4 = "result == 0"
            else
                var_1c_1 = "SoundOggReadBits"
                var_20_1 = 0x193
                ecx_4 = "readSize % (2 * vi->channels) == 0"
        else
            var_1c_1 = "SoundOggReadBits"
            var_20_1 = 0x192
            ecx_4 = "offsetFromStart % (2 * vi->channels) == 0"
    else
        char* const esi_2 = &data_5b2591
        int32_t var_1c = eax_3
        char* ecx_3 = *(arg3[1] + 0x20)
        
        if (ecx_3 != 0)
            esi_2 = ecx_3
        
        char* const var_20 = esi_2
        result = sub_4892e0("failed to read ogg %s %d")
        ecx_4 = "Halt"
        var_1c_1 = "SoundOggReaderOpen"
        var_20_1 = 0x172
    
    sub_489550(result, &data_5b2591, ecx_4, "d:\ax\trunk\ax2017\engine\soundogg.cpp", var_20_1, 
        var_1c_1)
    
    if (IsDebuggerPresent() == 1)
        breakpoint
    
    sub_489700()
    noreturn
}
