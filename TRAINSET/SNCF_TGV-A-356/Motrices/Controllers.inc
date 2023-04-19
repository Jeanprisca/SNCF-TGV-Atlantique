Comment( Controllers.inc )

   EngineControllers (
        Throttle ( 0 1 0.025 0
            NumNotches ( 0 )
        )
		Brake_Train (
			0 1 0.025 0.5 
			NumNotches (
				5 
				Notch ( 0 	0 TrainBrakesControllerReleaseStart )
				Notch ( 0.2 	0 TrainBrakesControllerHoldLappedStart )
				Notch ( 0.25 	1 TrainBrakesControllerGraduatedSelfLapLimitedHoldingStart )
				Notch ( 0.9 	0 TrainBrakesControllerContinuousServiceStart )
				Notch ( 0.95 	0 TrainBrakesControllerEmergencyStart )
			)
		)

        Brake_Dynamic ( 0 1 0.025 0 
                NumNotches ( 10
                    Notch ( 0      0 Dummy )
                    Notch ( 0.12   0 Dummy )
                    Notch ( 0.24   0 Dummy )
                    Notch ( 0.35   0 Dummy )
                    Notch ( 0.45   0 Dummy )
                    Notch ( 0.56   0 Dummy )
                    Notch ( 0.67   0 Dummy )
                    Notch ( 0.80   0 Dummy )
                    Notch ( 0.85   0 Dummy )
                    Notch ( 1.00  0 Dummy )
            		)
        	)

	  	Brake_Engine ( 0 1 0.0125 0 
                NumNotches ( 2
                    Notch ( 0       0 EngineBrakesControllerReleaseStart )
                    Notch ( 1    0 EngineBrakesControllerContinuousServiceStart )
            		)
        	)
		DirControl ( -1 0 1 1 )
		Combined_Control ( 0 1 0.5 0.5 throttle dynamic )
		EmergencyStopResetToggle ( 0 1 0 )
		EmergencyStopToggle ( 0 1 0 )
		Sanding ( 0 1 0 )
		Wipers ( 0 1 0 )
		Vigilence ( 0 1 0 )
		Horn ( 0 1 0 )
		AWS ( 0 1 0 )
		Vigilance ( 0 1 0 )
		Overspeed ( 0 1 0 )
		ShutsDownEngine	( 0 1 O )
		PantographToggle1 ( 0 1 0 )
		PantographToggle2 ( 0 1 0 )
		PantographsToggle_5 ( 0 1 2 )
		Headlights ( 0 0.25 1 0 )
		BellToggle ( 0 1 0 )
		CABToggle ( 0 1 0 )
		BailOffButton ( 0 1 0 )
    )
	
		DoesHornTriggerBell 					( 0 )