// 函数名称: sub_4648f0
// 虚拟地址: 0x4648f0
// 源二进制: E:/torrent/Cursor/Roll for the Galaxy/Roll.exe.bndb

char** __convention("regparm")sub_4648f0(int32_t arg1, void* arg2, char** arg3, int32_t* arg4, int32_t* arg5)
{
    // 第一条实际指令: int32_t __saved_ebp
    int32_t __saved_ebp
    uint32_t eax_1 = __security_cookie ^ &__saved_ebp
    uint32_t var_8 = eax_1
    char** result = arg3
    uint32_t var_b4 = result
    var_b4 = result
    *arg5 = 0
    char const* const edx
    
    if (arg2 == 0 || *(arg2 + 0xc3c) == 0)
        void* ecx = data_6cfe4c
        char const* const var_e0
        int32_t var_dc
        char const* const var_d8_1
        char* ecx_1
        
        if (ecx == 0)
            var_d8_1 = "GetClient"
            var_dc = 0x75
            var_e0 = "d:\ax\trunk\ax2017\jams\shared\tgggame\code\gameapp.cpp"
            ecx_1 = "gClient"
        label_4651c6:
            sub_489550(eax_1, &data_5b2591, ecx_1, var_e0, var_dc, var_d8_1)
            
            if (IsDebuggerPresent() == 1)
                breakpoint
            
            sub_489700()
            noreturn
        
        eax_1 = *(ecx + 0x10)
        
        if (eax_1 == *(ecx + 0xc))
            int32_t edx_1 = arg4[1]
            int32_t var_bc
            
            if (edx_1 u> 0x1e)
            label_4649d2:
                
                if (data_6fadf0 == 0)
                    if (edx_1 - 1 u> 0x1c)
                    label_4651ad:
                        var_d8_1 = "RollHelpStringInternal"
                        var_dc = 0x4367
                    label_4651b7:
                        ecx_1 = "Halt"
                    label_4651bc:
                        var_e0 = "d:\ax\trunk\ax2017\jams\roll\code\rollclient.cpp"
                        goto label_4651c6
                    
                    eax_1 = zx.d(*(edx_1 + &jump_table_465244[0x11]:3))
                    int32_t var_c0
                    
                    switch (eax_1)
                        case 0
                            edx = "[bold_prompt]Setup[normal_prompt]: Drag tiles {tile} left or right to "
                            "swap them."
                            arg3 = result
                        case 1
                            edx = &data_5b2591
                            arg3 = result
                        case 2
                            edx = "[bold_prompt]Roll[normal_prompt]: Roll dice {die_any}."
                            arg3 = result
                        case 3
                            void* eax_8 = sub_452b90(*(ecx + 0xa68))
                            int32_t esi_2 = *eax_8
                            int32_t eax_9 = sub_453510(esi_2, 3)
                            int32_t eax_10 = sub_453510(esi_2, 7)
                            
                            if (eax_9 == 0)
                                if (eax_10 != 0)
                                    goto label_464b9b
                                
                                int32_t eax_12 = sub_452ea0(eax_8, eax_9 + 4)
                                var_bc = sub_452ea0(eax_8, eax_9 + 6)
                                int32_t eax_14 = sub_452ea0(eax_8, eax_9 + 5)
                                int32_t ecx_14 = var_bc + eax_14
                                
                                if (eax_12 != 0)
                                    if (ecx_14 != 0)
                                        edx = "[normal_prompt]Your cup {cup} can't be empty, so drag in "
                                        "a die {die_any} from your construction {construction} or worlds "
                                        "{nongrey}."
                                    else
                                        edx = "[normal_prompt]Your cup {cup} can't be empty, so drag in "
                                        "a good {die_any} from your one of your worlds {nongrey}."
                                else if (ecx_14 == 0)
                                    edx = "[normal_prompt]Your cup {cup} can't be empty, so drag in a "
                                    "die {die_any} from your construction {construction} or worlds "
                                    "{nongrey}."
                                else
                                    edx = "[normal_prompt]Your cup {cup} can't be empty, so drag in a "
                                    "die {die_any} from your construction {construction} area."
                                
                                arg3 = result
                            else if (*(eax_8 + 0x308) + *(eax_8 + 0x300) s<= 0)
                            label_464b9b:
                                int32_t esi_5 = sub_452ea0(eax_8, 6) + sub_452ea0(eax_8, 5)
                                arg3 = result
                                
                                if (sub_452ea0(eax_8, 4) != neg.d(esi_5))
                                    edx = "[bold_prompt]Manage Empire[normal_prompt]: May Recall dice "
                                    "{die_any} from worlds {nongrey} and construction area "
                                    "{construction}, Roll when done."
                                else
                                    edx = "[bold_prompt]Manage Empire[normal_prompt]: Roll to continue."
                            else
                                edx = "[bold_prompt]Manage Empire[normal_prompt]: Must drag to Recruit "
                                "citizenry [citizenry] dice {die_any} to your cup {cup} for 1 {credit} "
                                "each."
                                arg3 = result
                        case 4
                            int32_t* eax_19 = sub_452b90(*(ecx + 0xa68))
                            int32_t* var_b8_1 = &data_62d6c4
                            int32_t esi_6 = 0
                            var_b4 = 0
                            sub_481430(&data_62d6c4, &var_b4)
                            
                            for (uint32_t i = var_b4; i != 0xffffffff; i = var_b4)
                                if (*i == 1 && *(i + 0x18) == *eax_19 && *(i + 0x10) - 7 u<= 6
                                        && sub_457400(i + 8) == 0)
                                    esi_6 += 1
                                
                                sub_481430(var_b8_1, &var_b4)
                            
                            int32_t eax_24 = sub_464830(eax_19)
                            int32_t eax_25
                            int32_t ecx_25
                            eax_25, ecx_25 = sub_460e00(eax_19)
                            int32_t var_d8_4 = ecx_25
                            var_bc = eax_25 - eax_24
                            void var_ac
                            var_c0 = sub_45e7f0(eax_19, &var_ac)
                            var_b4 = sub_45e780(eax_19, &var_ac)
                            
                            if (sub_45e6c0(eax_19, &var_ac) != 1)
                                edx = "[bold_prompt]Assign[normal_prompt]: Drag any die {die_any} to "
                                "Lock {lock} in a phase of your choice."
                                arg3 = result
                            else if (eax_19[0x2f4].b == 0)
                                if (var_bc s> 0)
                                    edx = "[bold_prompt]Assign[normal_prompt]: Drag dice {die_any} to phases."
                                    arg3 = result
                                else
                                    int32_t eax_31
                                    
                                    if (esi_6 s<= 1)
                                        eax_31 = eax_24
                                    label_464d41:
                                        
                                        if (esi_6 != 1 || eax_31 s<= 0)
                                            int32_t ecx_29 = var_c0
                                            uint32_t edx_10 = var_b4
                                            
                                            if (edx_10 == ecx_29 + 1)
                                                edx = "[bold_prompt]Assign[normal_prompt]: Reassign "
                                                "{reassign} a dictated die."
                                                arg3 = result
                                            else if (edx_10 s<= ecx_29)
                                                int32_t eax_34 = ecx_29 - edx_10
                                                
                                                if (edx_10 s>= ecx_29 || (eax_34 != 1
                                                        && (edx_10 s>= ecx_29 || eax_34 s<= 1)))
                                                    edx = "[bold_prompt]Assign[normal_prompt]: Press "
                                                    "[bold_prompt]DONE[normal_prompt] to confirm "
                                                    "assignments."
                                                    arg3 = result
                                                else
                                                    edx = "[bold_prompt]Assign[normal_prompt]: At least "
                                                    "one of your dice {die_any} does not match its "
                                                    "assigned phase."
                                                    arg3 = result
                                            else
                                                edx = "[bold_prompt]Assign[normal_prompt]: Reassign "
                                                "{reassign} a dictated dice."
                                                arg3 = result
                                        else
                                            edx = "[bold_prompt]Assign[normal_prompt]: Assign wild die "
                                            "{die_wild} to a phase."
                                            arg3 = result
                                    else if (esi_6 - eax_24 != 0)
                                        eax_31 = eax_24
                                        
                                        if (eax_31 != 1)
                                            if (eax_31 s<= 0)
                                                goto label_464d41
                                            
                                            edx = "[bold_prompt]Assign[normal_prompt]: Assign remaining "
                                            "wild dice {die_wild} to phases."
                                            arg3 = result
                                        else
                                            edx = "[bold_prompt]Assign[normal_prompt]: Assign remaining "
                                            "wild die {die_wild} to a phase."
                                            arg3 = result
                                    else
                                        edx = "[bold_prompt]Assign[normal_prompt]: Assign wild dice "
                                        "{die_wild} to phases."
                                        arg3 = result
                            else if (var_bc s> 0)
                                edx = "[bold_prompt]Assign[normal_prompt]: Assign remaining dice {die_any}."
                                arg3 = result
                            else if (eax_24 s<= 0)
                                edx = "[bold_prompt]Assign[normal_prompt]: Press "
                                "[bold_prompt]DONE[normal_prompt] to confirm assignments."
                                arg3 = result
                            else
                                arg3 = result
                                
                                if (eax_24 s<= 1)
                                    edx =
                                        "[bold_prompt]Assign[normal_prompt]: Assign remaining wild die."
                                else
                                    edx = "
                                        [bold_prompt]Assign[normal_prompt]: Assign wild dice to phases."
                        case 5
                            int32_t esi_7 = *(ecx + 0xa68)
                            int32_t eax_35 = sub_453510(esi_7, 0xe)
                            int32_t eax_36 = sub_453510(esi_7, 0xe)
                            int32_t eax_37 = sub_453510(*(data_6cfe4c + 0xa68), 9)
                            
                            if (eax_37 != 0)
                                arg3 = result
                                
                                if (eax_37 + eax_36 + eax_35 == eax_37)
                                    if (eax_37 != 1)
                                        edx = "[bold_prompt]Explore[normal_prompt]: Drag dice {die_any} "
                                        "to Scout or Stock."
                                    else
                                        edx = "[bold_prompt]Explore[normal_prompt]: Drag die {die_any} "
                                        "to Scout or Stock."
                                else if (eax_37 != 1)
                                    edx = "[bold_prompt]Explore[normal_prompt]: Drag remaining dice "
                                    "{die_any} to Scout or Stock."
                                else
                                    edx = "[bold_prompt]Explore[normal_prompt]: Drag remaining die "
                                    "{die_any} to Scout or Stock."
                            else
                                edx = "[bold_prompt]Explore[normal_prompt]: Press "
                                "[bold_prompt]DONE[normal_prompt] to confirm assignments."
                                arg3 = result
                        case 6
                            edx = "[bold_prompt]Explore[normal_prompt]: Select tiles {tile} to discard."
                            arg3 = result
                        case 7
                            edx = "[bold_prompt]Explore[normal_prompt]: Arrange new tiles {tile}."
                            arg3 = result
                        case 8
                            edx = "[bold_prompt]Explore[normal_prompt]: Rearrange tiles {tile}."
                            arg3 = result
                        case 9
                            void* eax_38 = sub_452b90(*(ecx + 0xa68))
                            int32_t eax_39 = sub_452ea0(eax_38, 5)
                            
                            if (sub_453170(*eax_38, &var_b4) == 0 || eax_39 != var_b4)
                                arg3 = result
                                
                                if (sub_452ea0(eax_38, 0xa) == 0)
                                    edx = "[bold_prompt]Develop[normal_prompt]: Press "
                                    "[bold_prompt]DONE[normal_prompt] to confirm assignments."
                                else
                                    edx = "[bold_prompt]Develop[normal_prompt]: Assign dice {die_any} to "
                                    "develop [develop]."
                            else
                                edx = "[bold_prompt]Develop[normal_prompt]: Press PLACE to place tile {tile}."
                                arg3 = result
                        case 0xa
                            int32_t** eax_42 = sub_452b90(*(ecx + 0xa68))
                            int32_t eax_43 = sub_452ea0(eax_42, 6)
                            int32_t* var_d8_5 = &var_c0
                            
                            if (sub_4531b0(&var_c0, &var_b4, *eax_42) == 0 || eax_43 != var_b4)
                                arg3 = result
                                
                                if (sub_452ea0(eax_42, 0xb) == 0)
                                    edx = "[bold_prompt]Settle[normal_prompt]: Press "
                                    "[bold_prompt]DONE[normal_prompt] to confirm assignments."
                                else
                                    edx = "[bold_prompt]Settle[normal_prompt]: Assign dice {die_any} to "
                                    "settle [settle]."
                            else
                                edx = "[bold_prompt]Settle[normal_prompt]: Press PLACE to place tile."
                                arg3 = result
                        case 0xb
                            int32_t esi_11 = *(ecx + 0xa68)
                            var_c0 = sub_453510(esi_11, 0xc)
                            int32_t var_b0_3 = 0
                            int32_t ecx_46 = *(sub_452b90(esi_11) + 0x2a8)
                            uint32_t esi_12
                            
                            if (ecx_46 == 0)
                                esi_12 = 0
                            else
                                esi_12 = sub_452cc0(ecx_46)
                            
                            var_b4 = esi_12
                            eax_1 = Unlock(&var_b4)
                            uint32_t edi_7 = var_b4
                            
                            while (esi_12 != edi_7)
                                if (esi_12 == 0)
                                    var_d8_1 = "Tiles::TileIt::operator *"
                                    var_dc = 0x2ac
                                    ecx_1 = &data_5e3f90
                                    goto label_4651bc
                                
                                var_b4 = sub_45b410(esi_12)
                                eax_1 = sub_45b4c0(esi_12)
                                
                                if (var_b4 s< eax_1)
                                    var_b0_3 += 1
                                
                                int32_t ecx_49 = *(esi_12 + 0x40)
                                
                                if (ecx_49 != 0)
                                    eax_1 = sub_452cc0(ecx_49)
                                    esi_12 = eax_1
                                else
                                    esi_12 = 0
                            
                            if (var_c0 == 0 || var_b0_3 == 0)
                                edx = "[bold_prompt]Produce[normal_prompt]: Press "
                                "[bold_prompt]DONE[normal_prompt] to confirm assignments."
                            else
                                edx = "[bold_prompt]Produce[normal_prompt]: Drag a good {good_any} to a "
                                "production world {nongrey}."
                            
                            arg3 = result
                        case 0xc
                            if (sub_4603d0(sub_452b90(*(ecx + 0xa68))) != 2)
                                arg3 = result
                                
                                if (sub_4534b0() s<= 0)
                                    edx = "[bold_prompt]Ship[normal_prompt]: Drag a shipper {ship_any} "
                                    "to any good {good}."
                                else
                                    edx = "[bold_prompt]Ship[normal_prompt]: Drag the shipper "
                                    "{shipper_any} and good to [bold_prompt]Trade[normal_prompt] or "
                                    "[bold_prompt]Consume[normal_prompt]."
                            else
                                edx = "[bold_prompt]Ship[normal_prompt]: Press "
                                "[bold_prompt]DONE[normal_prompt] to confirm assignments."
                                arg3 = result
                        case 0xd
                            void* eax_54 = sub_452b90(*(ecx + 0xa68))
                            *(eax_54 + 0x668)
                            int32_t* eax_55 = sub_4571c0()
                            int32_t var_d8_7 = sub_480bb0(*(eax_54 + 0x668), eax_55[0xe])
                            sub_48a9d0(result, 
                                "[bold_prompt][normal_prompt]Choose a die to remove {remove_any} due to "
                            "[bold_prompt]%s[normal_prompt].")
                            @__security_check_cookie@4(var_8 ^ &__saved_ebp)
                            return result
                        case 0xe
                            void* eax_60 = sub_452b90(*(ecx + 0xa68))
                            var_b4 = *(eax_60 + 0x664)
                            void* eax_62 = sub_4539b0(eax_60)
                            *(eax_60 + 0x668)
                            int32_t* eax_63 = sub_4571c0()
                            int32_t var_d8_8 = sub_480bb0(*(eax_60 + 0x668), eax_63[0xe])
                            
                            if (eax_62 s>= 2)
                                sub_48a9d0(result, 
                                    "[bold_prompt][normal_prompt]Choose dice {die_any} to return to your cup "
                                "{cup} due to [bold_prompt]%s[normal_prompt].")
                                @__security_check_cookie@4(var_8 ^ &__saved_ebp)
                                return result
                            
                            if (eax_62 != 1)
                                sub_48a9d0(result, 
                                    "[bold_prompt][normal_prompt]Press [bold_prompt]DONE[normal_prompt] to "
                                "confirm returned dice due to [bold_prompt]%s[normal_prompt].")
                                @__security_check_cookie@4(var_8 ^ &__saved_ebp)
                                return result
                            
                            if (var_b4 != 1)
                                sub_48a9d0(result, 
                                    "[bold_prompt][normal_prompt]Choose one more die {die_any} to return to "
                                "your cup {cup} due to [bold_prompt]%s[normal_prompt].")
                                @__security_check_cookie@4(var_8 ^ &__saved_ebp)
                                return result
                            
                            sub_48a9d0(result, 
                                "[bold_prompt][normal_prompt]Choose a die {die_any} to return to your cup "
                            "{cup} due to [bold_prompt]%s[normal_prompt].")
                            @__security_check_cookie@4(var_8 ^ &__saved_ebp)
                            return result
                        case 0xf
                            void* eax_58 = sub_452b90(*(ecx + 0xa68))
                            int32_t esi_14 = *(eax_58 + 0x664)
                            void* eax_59 = sub_4538d0(eax_58)
                            arg3 = result
                            
                            if (eax_59 s>= 2)
                                edx = "[bold_prompt][normal_prompt]Drag dice {die_any} to the citizenry "
                                "[citizenry] to pay for tile."
                            else if (eax_59 != 1)
                                edx = "[bold_prompt][normal_prompt]Excess workers resolved. Press "
                                "[bold_prompt]DONE[normal_prompt] to continue."
                            else if (esi_14 - eax_59 != 0)
                                edx = "[bold_prompt][normal_prompt]Excess workers! Drag dice {die_any} "
                                "to the citizenry [citizenry] to choose which worker {die_any} pays for "
                                "the tile."
                            else
                                edx = "[bold_prompt][normal_prompt]Excess workers! Drag a die {die_any} "
                                "to the citizenry [citizenry] to choose which worker {die_any} pays for "
                                "the tile."
                        case 0x10
                            *arg5 = &data_6373b4
                            edx = "[bold_prompt]Explore[normal_prompt]: The tile bag is empty. All "
                            "players with 3 or more construction tiles {tile} must abandon a tile. Drag "
                            "a tile to the center to abandon."
                            arg3 = result
                        case 0x11
                            goto label_4651ad
                else
                    eax_1 = data_632590
                    
                    switch (eax_1)
                        case 0, 3
                            edx = "[bold_prompt][normal_prompt]"
                            arg3 = result
                        case 1
                            edx = "[bold_prompt][normal_prompt]Opponent Starting Tiles"
                            arg3 = result
                        case 2
                            edx = "[bold_prompt][normal_prompt]Assign"
                            arg3 = result
                        case 4
                            edx = "[bold_prompt][normal_prompt]Reveal"
                            arg3 = result
                        case 5
                            int32_t eax_7 = data_632594 - 1
                            
                            if (eax_7 u> 5)
                                edx = "[bold_prompt][normal_prompt]"
                                arg3 = result
                            else
                                switch (eax_7)
                                    case 0
                                        edx = "[bold_prompt]Explore[normal_prompt]"
                                    case 1
                                        edx = "[bold_prompt]Develop[normal_prompt]"
                                    case 2
                                        edx = "[bold_prompt]Settle[normal_prompt]"
                                    case 3
                                        edx = "[bold_prompt]Produce[normal_prompt]"
                                    case 4, 5
                                        edx = "[bold_prompt]Ship[normal_prompt]"
                                
                                arg3 = result
                        case 6
                            edx = "[bold_prompt]Manage Empire[normal_prompt]"
                            arg3 = result
                        case 8
                            edx = "[bold_prompt]Game Over[normal_prompt]"
                            arg3 = result
                        default
                            var_d8_1 = "RollHelpStringInternal"
                            var_dc = 0x4242
                            goto label_4651b7
            else
                eax_1 = zx.d(lookup_table_4651e8[edx_1])
                
                switch (eax_1)
                    case 0
                        if (sub_45dd60(&var_bc) == 0 || var_bc == *arg4 || data_632a64 != 0xffffffff)
                            edx = "[bold_prompt][normal_prompt]"
                            arg3 = result
                        else
                            edx = "[bold_prompt][normal_prompt]Waiting for other Players"
                            *(sub_41c5b0() + 0x844) = 1
                            arg3 = result
                    case 1
                        goto label_4649d2
        else
            edx = "[bold_prompt][normal_prompt]Waiting for Server"
            arg3 = result
    else
        edx = "[bold_prompt][normal_prompt]Game Over"
    
    sub_48a2c0(arg3, edx)
    @__security_check_cookie@4(var_8 ^ &__saved_ebp)
    return result
}
