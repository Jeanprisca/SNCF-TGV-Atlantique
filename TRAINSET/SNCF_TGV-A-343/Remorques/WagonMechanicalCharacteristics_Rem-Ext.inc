Comment( WagonMechanicalCharacteristics_Rem-Ext.inc )

	comment(-------- Caracteristiques generales remorques 1 et 10--------)

	Size ( 2.83m 3.29m 21.57m )
	CentreOfGravity ( 0m 1.5m 0.10m )
	Mass ( 34.0t )

	comment(-------- Roulement --------)

	NumWheels (	2 )
	WheelRadius ( 0.92m )
	InertiaTensor ( 
	Box (2.904m 3.5m 18.20m) )
	Adheasion ( 0.2 0.4 2 0 )
	AntiSlip()
	Friction (
        493.1N/m/s      -0.10     1.4mph          0.590     1.956
        5.1N/rad/s      1         -1rad/s         0         1
     	)

	comment(-------- Adhérence --------)
	
 	ORTSAdhesion (
	 	ORTSCurtius_Kniffler ( 6 44 0.12 0.7 )
 	)
	
	comment(-------- AntiEnrayage --------)

	ORTSWheelBrakeSlideProtection (1)
	ORTSEmergencyBrakingDisablesWSP (1)
	Antislip ( 0 )
	
	
	comment(-------- Deraillement --------)

	DerailRailHeight ( 4cm )
	DerailRailForce ( "4m/(s^2)*34t" )
	DerailBufferForce ( 200kN )
	NumWheels ( 2 )
	WheelRadius ( 0.46m )

    	ORTSDavis_A ( 410.21 )
    	ORTSDavis_B ( 11.19 )
    	ORTSDavis_C ( 0.4694 )
    	ORTSBearingType ( Low )


	comment(-------- Portes --------)
	
	ORTSDoors (
	ClosingDelay ( 5s )
	OpeningDelay ( 1s )
	)
