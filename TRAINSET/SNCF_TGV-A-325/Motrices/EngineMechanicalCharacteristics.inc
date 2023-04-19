Comment( EngineMechanicalCharacteristics.inc )

	comment(-------- Caracteristiques generales --------)

	Size 			( 2.96m 4.37m 21.97m )
	CentreOfGravity 	( 0.0m 1.75m 0.0m )
	Mass 			( 68.0t )

	comment(-------- Roulement --------)

	WheelRadius 		( 0.92m )
	NumWheels 		( 4 )
	InertiaTensor 		(
	Box 			( 2.96m 4.37m 21.80m )
	Adheasion 		( 0.2 0.4 2 0 )
	Friction 		( 611N/m/s 0 1mph 4.25N/m/s 1.86 0N/rad/s 1 -1rad/s 0 1 )
	)

	comment(-------- Adhérence --------)
	
 	ORTSAdhesion (
	 	ORTSCurtius_Kniffler ( 6 44 0.12 0.7 )
 	)
	
	
	comment(-------- AntiEnrayage --------)

	ORTSWheelBrakeSlideProtection (1)
	ORTSEmergencyBrakingDisablesWSP (1)

	comment(-------- Antipatinage --------)
	
	ORTSSlipControlSystem ( 1 )
	ORTS (ORTSWheelSlipCausesThrottleDown) (1)
	Antislip ( 1 )

	

	comment(-------- Deraillement --------)

	DerailRailHeight ( 4cm )
	DerailRailForce ( "4m/(s^2)*68t" )
	DerailBufferForce ( 200kN )
	NumWheels ( 4 )
	WheelRadius ( 0.46m )

    	ORTSDavis_A ( 820.41 )
    	ORTSDavis_B ( 22.38 )
    	ORTSDavis_C ( 1.9977 )
    	ORTSBearingType ( Low )
	
	
	comment(-------- Portes --------)
	
	ORTSDoors (
	ClosingDelay ( 5s )
	OpeningDelay ( 1s )
	)

	

