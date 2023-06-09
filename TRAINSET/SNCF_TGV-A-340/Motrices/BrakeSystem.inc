	Comment( BrakeSystem.inc )

	BrakesEngineBrakeType 							( "Air_twin_pipe" )
	BrakesTrainBrakeType 							( "Air_twin_pipe" )
	BrakesEngineControllers 						( "Blended, Independent, Train, Dynamic" )


	comment(-------- Asservissement traction freinage ATF --------)

	DoesBrakeCutPower 									( 1 )
    BrakeCutsPowerAtBrakeCylinderPressure 				( 15 )
	ORTSEmergencyCausesPowerDown						( 1 )
	ORTSEmergencyCausesThrottleDown 					( 1 )

		comment(-------- ORTS Brakesection --------)

	ORTSMainResChargingRate 						( 0.04bar/s )
	ORTSBrakePipeChargingRate 						( 3bar/s )
	ORTSEngineBrakeReleaseRate 						( 1.0bar/s )
	ORTSEngineBrakeApplicationRate 					( 1.0bar/s )
	ORTSBrakePipeTimeFactor 						( 0.0004s )
	ORTSBrakeServiceTimeFactor 						( 1.0090s )
	ORTSBrakeEmergencyTimeFactor 					( 0.1000s )
	
	comment(-------- Compresseur principal --------)

	AirBrakesAirCompressorPowerRating 					( 3.5 )
	AirBrakesAirCompressorWattage 						( 11000 )
	AirBrakesAirUsedPerPoundsOfBrakePipePressure 		( 1.2 )
	AirBrakesCompressorRestartPressure 					( 7bar )
	AirBrakesHasLowPressureTest 						( 0 )
	AirBrakesIsCompressorElectricOrMechanical 			( "1" )
	AirBrakesMainMaxAirPressure	 						( 9bar )
	AirBrakesMainMinResAirPressure 						( 1 )
	AirBrakesMainResVolume 								( 56 )
	AirBrakeMaxMainResPipePressure						( 9bar )

	comment(-------- Frein de locomotive --------)

	EngineBrakesControllerMinPressureReduction 					( 10.5 )
	EngineBrakesControllerMaxPressureReduction 					( 10.5 )
	EngineBrakesControllerMaxApplicationRate 					( 25 )
	EngineBrakesControllerMaxReleaseRate 						( 40 )
	EngineBrakesControllerMaxQuickReleaseRate 					( 40 )
	EngineBrakesControllerMinSystemPressure 					( 0 )
	EngineBrakesControllerMaxSystemPressure 					( 73 )
	EngineBrakesControllerMaxPressureDropInNormalApplication 	( 73 )
	EngineBrakesControllerFullServicePressureDrop 				( 28.4 )
	EngineBrakesControllerDirectControlExponent 				( 1 )
	EngineBrakesControllerHasProportionalBrake 					( 0 )

	comment(-------- Frein de train --------)

	TrainBrakesControllerMinPressureReduction 					( 20.5 )
	TrainBrakesControllerMaxPressureReduction 					( 20.5 )
	TrainBrakesControllerMaxApplicationRate 					( 0.8bar/s )
	TrainBrakesControllerMaxReleaseRate 						( 0.8bar/s )
	TrainBrakesControllerEmergencyApplicationRate 				( 3.0bar/s )
	TrainBrakesControllerMinSystemPressure 						( 0 )
	TrainBrakesControllerMaxSystemPressure 						( 5bar )
	TrainBrakesControllerMaxPressureDropInNormalApplication 	( 51.4 )
	TrainBrakesControllerEmergencyBrakeTimePenalty 				( 0 )
	TrainBrakesControllerFullServicePressureDrop 				( 1.9bar ) Comment (manostat H 3bars)
	TrainBrakesControllerDirectControlExponent 					( 1 )
	TrainPipeLeakRate											(1.5bar/s)
	ORTSTrainBrakesControllerMaxOverchargePressure				(5.4bar) Comment (Maximum overcharge)
	ORTSTrainBrakesControllerOverchargeEliminationRate			(0.0025bar/s) Comment (The leakage rate that drops to 5 bar in the RUN position.)

	comment(-------- Fuites CP --------)
	
	ORTSBrakePipeChargingRate						( 5bar/s )

	comment(-------- Frein électrique --------)

    DynamicBrakesMinUsableSpeed						( 12 )
    DynamicBrakesMaximumEffectiveSpeed				( 25 )
    DynamicBrakesMaximumForce						( 150kN )
    DynamicBrakesResistorCurrentLimit 				( 1040 )
    DynamicBrakesCutInSpeed							( 15 )
    DynamicBrakesMaxAirBrakePressure 				( 15 )
   	DynamicBrakesFadingSpeed						( 20 )
    DynamicBrakesDelayTimeBeforeEngaging 			( 0.5 )
   	DynamicBrakesMaximumSpeedForFadeOut 			( 1800 )
    DynamicBrakesEffectAtMaximumFadeOut				( 0 )
    DynamicBrakesHigherSpeedCurveExponent			( 13.5 )
    DynamicBrakesLowerSpeedCurveExponent			( 0.9 )
    DynamicBrakesNumberOfControllerNotches			( 20 )
	DynamicBrakeHasAutoBailOff						( 1 )

	ORTSDynamicBlendingOverride						( 1 )
	ORTSDynamicBlendingForceMatch					( 1 )