// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.c                                             :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: xray <xray@42angouleme.fr>                 +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2024/09/15 23:38:39 by xray              #+#    #+#             //
//   Updated: 2024/09/16 10:58:09 by xray             ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#include <SDL2/SDL.h>
#include <SDL2/SDL_timer.h>
#include <SDL2/SDL_video.h>
#include <stdio.h>


int main(void)
{

	if (SDL_Init(SDL_INIT_VIDEO) != 0)
	{
		printf("tu as flop chacal");
		return(-1);
	}
	SDL_Window *win = SDL_CreateWindow("TEST", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 720, 620, SDL_WINDOW_SHOWN);

	if (win == NULL)
	{
		printf("tu es le flopeur originel");
		return (-1);
	}

	SDL_Delay(5000);
	void SLD_Quit(void);
	return (0);
}

