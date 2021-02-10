define floorplan model
(
  # sombre, sensible, artistic
  color "gray30"

  # most maps will need a bounding box
  boundary 1

  gui_nose 0
  gui_grid 0
  gui_move 0
  gui_outline 0
  gripper_return 0
  fiducial_return 0
  ranger_return 1
)

define rect_block model
(
  size [0.5 0.5 1.5]
  gui_nose 0
)

define polygon_block model
(
    size [0.5 0.2 1.7]
    block( 
    points 8
    point[0] [-0.25 0.05]
    point[1] [-0.25 -0.05]
    point[2] [-0.1 -0.1 ]

    point[3] [0.1 -0.1]
    point[4] [0.25 -0.05]
    point[5] [0.25 0.05]
    point[6] [0.1 0.1]
    point[7] [-0.1 0.1]
    z [0 1.7]
  )
)
